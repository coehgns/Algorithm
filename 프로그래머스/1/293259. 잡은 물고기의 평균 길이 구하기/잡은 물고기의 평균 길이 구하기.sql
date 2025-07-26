-- 코드를 작성해주세요
select round(avg(case
                when LENGTH is null then 10
                else LENGTH
                end 
                ), 2) as AVERAGE_LENGTH
from FISH_INFO