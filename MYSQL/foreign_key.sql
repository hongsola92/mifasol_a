show tables;
SET sql_safe_updates=0;
delete from customer;

set foreign_key_checks=1;
delete from Customer;
select * from Customer;

select * from informatoin_schema.table_constraints
where table_name like 'Orders' 
alter table Orders drop foreign key Orders_ibfk_1;