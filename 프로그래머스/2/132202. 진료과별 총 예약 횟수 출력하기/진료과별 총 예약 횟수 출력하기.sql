-- 코드를 입력하세요
SELECT MCDP_CD, count(APNT_NO) as '5월예약건수'
from APPOINTMENT
where APNT_YMD like '2022-05%'
group by MCDP_CD
order by count(APNT_NO) asc, MCDP_CD asc