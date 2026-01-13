# Write your MySQL query statement below
select t.driver_id,d.driver_name, 
round(avg(case when month(t.trip_date) in (1,2,3,4,5,6) then t.distance_km/t.fuel_consumed end),2) as first_half_avg, 
round(avg(case when month(t.trip_date) in (7,8,9,10,11,12) then t.distance_km/t.fuel_consumed end),2) as second_half_avg,
round((avg(case when month(t.trip_date) in (7,8,9,10,11,12) then t.distance_km/t.fuel_consumed end)) - (avg(case when month(t.trip_date) in (1,2,3,4,5,6) then t.distance_km/t.fuel_consumed end)),2) as efficiency_improvement 
from trips t join drivers d on t.driver_id=d.driver_id 
group by d.driver_id,d.driver_name having first_half_avg is not null and second_half_avg is not null and (avg(case when month(t.trip_date) in (7,8,9,10,11,12) then t.distance_km/t.fuel_consumed end)>(avg(case when month(t.trip_date) in (1,2,3,4,5,6) then t.distance_km/t.fuel_consumed end)))
order by efficiency_improvement desc, driver_name asc;