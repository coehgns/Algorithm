-- 코드를 입력하세요
SELECT BOOK_ID, Date_format(PUBLISHED_DATE, '%Y-%m-%d')
from BOOK
where CATEGORY = '인문' and PUBLISHED_DATE like('2021%')
order by PUBLISHED_DATE asc