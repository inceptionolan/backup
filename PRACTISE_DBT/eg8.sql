

drop procedure if exists sp_classifyemp3;

DELIMITER $$

create procedure sp_classifyemp3(p_id int)
begin
    declare v_sal double;
    declare v_status varchar(50);
    select sal into v_sal from EMP where empno=p_id;
    

    case 
    when v_sal <1500 then
          set v_status='bhikari';
    when v_sal < 2500 then
          set v_status= 'middle';
    else
           set v_status='ambani';
end case;
insert into results (string) values (v_status);

end;
$$

delimiter  ;


