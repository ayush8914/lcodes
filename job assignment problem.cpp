#include <bits/stdc++.h>
using namespace std;
 int cost_matrix[4][4] ={{9, 2, 7, 8},{6, 4, 3, 7},{5, 8, 1, 8},{7, 6, 9, 4}};
typedef struct node
{
    int lb_cost;
    int person_id;
    int job_id;
    node* parent;
    bool job_assigned[4];
}n;
 
struct comp{
    bool operator()(const n* lhs,const n* rhs) const{
        return lhs->lb_cost > rhs->lb_cost;
    }
};
node* new_node(int x, int y, bool job_assigned[],n* parent){
    n* node = new n;
    for (int j=0;j<4; j++)
        node->job_assigned[j] = job_assigned[j];
    node->job_assigned[y] = true; 
    node->parent = parent;
    node->person_id = x;
    node->job_id = y;
    return node;
}

int findLB(int v[]){
    int lb=0;
    for(int i=0;i<4;i++){
         int mini=INT_MAX;
        for(int j=0;j<4;j++){
          if(mini > cost_matrix[i][j])
           v[i] = cost_matrix[i][j];
           mini = cost_matrix[i][j];
        }
        lb+=v[i];
    }
    return lb;
}
void print(n *node){
    char p_id = node->person_id+ 'A';
    if((*node).parent==NULL) return;
      print((*node).parent);
    cout<<"person "<<p_id<<" ---> job "<<node->job_id<<"\n"; 
}
 
int job_assignment(){

    priority_queue<n*, std::vector<n*>, comp> Live_list;
    int v[4]; 
    int lb = findLB(v);
    bool job_assigned[4] = {false};
    n* temp = new_node(-1, -1, job_assigned, NULL);
    (*temp).lb_cost = lb;
    (*temp).person_id = -1;
    int c=INT_MAX;


    Live_list.push(temp);
    while (!Live_list.empty()){
      n* min = Live_list.top();
      Live_list.pop();
      if(min->lb_cost >= c)continue;
      int i = min->person_id + 1;
      if (i == 4){
         print(min);
          c=min->lb_cost;
      }
      for(int j=0;j<4;j++){
        if (!min->job_assigned[j]){
          n* child = new_node(i, j, min->job_assigned, min);
          child->lb_cost = cost_matrix[i][j] + min->lb_cost - v[i];
          Live_list.push(child);
        }
      }
    }
    return c;
}

int main()
{   
    cout<<"\nmin cost is : "<<job_assignment();
    return 0;
}