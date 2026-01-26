# Write your MySQL query statement below
select w1.id from Weather w1, Weather w2 where
datediff(w1.recordDate, w2.recordDate) = 1 and w1.temperature > w2.temperature;
-- datediff 로 날짜 비고해서 하루차인 경우에서 -> 날씨가 더 높은 경우에만 id 값 출력