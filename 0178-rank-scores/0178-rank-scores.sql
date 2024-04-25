select score, DENSE_RANK() over (order by score DESC) as 'rank'
from Scores 
order by score DESC;
-- rank ko backticks ya inverted commas me isliye lagaya kuki rank is itself a keyword,
-- to isliye vo error dega, to humne use as ailas ki tarah use kar lia.