select ID, EMAIL, FIRST_NAME, LAST_NAME
from DEVELOPERS
where (DEVELOPERS.SKILL_CODE & (
       select sum(CODE)
       from SKILLCODES
       where SKILLCODES.NAME in ('Python', 'C#')
    )) <> 0
order by ID asc