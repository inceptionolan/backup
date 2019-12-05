


DROP PROCEDURE IF EXISTS sp_rectarea;

delimiter $$

create procedure sp_rectarea()
begin
        declare v_len int;
        declare v_area int;
        declare v_br int default 5;
        set v_len=10;
        set v_area= v_len * v_br;
        select v_len * v_br into v_area;

        insert into results values (v_area, 'area of rectangle');
end;
$$

delimiter ;
