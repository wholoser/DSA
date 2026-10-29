# Write your MySQL query statement below
select a.name as Employee
from Employee as a
JOIN Employee as b ON a.managerid = b.Id
Where a.salary > b.salary;