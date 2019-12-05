

DROP PROCEDURE IF EXISTS sp_calcvol;

delimiter $$

CREATE PROCEDURE sp_calcvol(p_l int, p_b int, p_h int)
begin
     Declare v_vol int;
     select p_l * p_b * p_h into v_vol;
     insert into results values(v_vol,'volume');
end;

$$
delimiter ;     
