create table work1 (worker_id int primary key,first_name varchar(20), last_name varchar(20),salary number(5),department varchar(20));
insert into work1 values(101,'Ram','Singh',250,'Construction');
insert into work1 values(102,'Sam','Singh',2500,'Construction');
insert into work1 values(103,'rishi','Singh',2500,'Construction');

desc work1;

select * from work1;

select first_name as worker_name from work1;

select upper(first_name) from work1;

select distinct department from work1;

select SUBSTR(first_name,1,3) from work1;

select length(department) from work1 where department =(select distinct department from work1);

select replace(first_name,'a','A') from work1;

select rtrim(first_name) as name from work1;
select ltrim(first_name) as name from work1;

select first_name || ' ' || last_name as complete_name from work1;

select * from work1 order by first_name ;














