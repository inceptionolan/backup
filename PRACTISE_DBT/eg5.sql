

drop procedure if exists sp_getemp;

delimiter $$

create procedure sp_getemp(p_id int)

begin

    declare v_sal int;
    declare v_name varchar(40);
    select sal, ename into v_sal , v_name from EMP where empno=p_id;
    insert into results values (v_sal, v_name);
end;

$$
delimiter ;



