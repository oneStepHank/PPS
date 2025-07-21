# Write your MySQL query statement below
select p.firstName , p.lastName , a.city, a.state
from Person p 
left join Address a on a.personId = p.personId; -- Address table와 연결하되, 없으면 null로 채우기