select ID, EMAIL, FIRST_NAME, LAST_NAME
from DEVELOPER_INFOS
where SKILL_1 = 'Python' || SKILL_2 = 'Python' || SKILL_3 = 'Python'
order by ID asc