function [xb,yb] = SEZ2body(pos_sez,eul_ang)

ph = eul_ang(1);
th = eul_ang(2);
ps = eul_ang(3);

Rb_ned = [ cos(th)*cos(ps), cos(th)*sin(ps), -sin(th)
            -cos(ph)*sin(ps) + sin(ph)*sin(th)*cos(ps), cos(ph)...
                *cos(ps) + sin(ph)*sin(th)*sin(ps), sin(ph)*cos(th)
            sin(ph)*sin(ps) + cos(ph)*sin(th)*cos(ps), -sin(ph)...
            *cos(ps) + cos(ph)*sin(th)*sin(ps), cos(ph)*cos(th) ];
        
pos_body = [-1 0 0; 0 1 0; 0 0 -1]*Rb_ned*[pos_sez; 0];
xb=pos_body(1);
yb=pos_body(2);
end
