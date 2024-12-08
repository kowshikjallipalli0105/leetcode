
select player_id,to_char(min(event_date),'YYYY-MM-DD') as first_login from Activity group by player_id
