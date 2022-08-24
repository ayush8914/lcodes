# Write your MySQL query statement below
SELECT p.firstName,p.lastName,a.city,a.state FROM (PERSON as p LEFT outer JOIN ADDRESS as a on p.personid = a.personid);