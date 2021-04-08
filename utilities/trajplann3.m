function [pos_ref,vel_ref,t_ref] = trajplann3(wpt,ToA)


a = 9.81/2;
t_ref = [];
vel_refx = [];
vel_refy = [];
vel_refz = [];
pos_refx = [];
pos_refy = [];
pos_refz = [];
vel_oldx = [];
vel_oldy = [];
vel_oldz = [];
t_end = 0;
noPoints = 100;

n = size(wpt,1);

for ii = 2:n
    t_ref(end+1:end+noPoints) = linspace(t_end,ToA(ii),noPoints);
    dt = t_ref(2+noPoints*(ii-2)) - t_ref(1+noPoints*(ii-2));
    delta_x = wpt(ii,1) - wpt(ii-1,1);
    if delta_x ~= 0
        v_max = [ (a*(ToA(ii)-ToA(ii-1)) + sqrt((a*(ToA(ii)-ToA(ii-1)))^2 - 4*abs(delta_x)*a));...
            (a*(ToA(ii)-ToA(ii-1)) - sqrt((a*(ToA(ii)-ToA(ii-1)))^2 - 4*abs(delta_x)*a)) ]/2;
        v_max = min(v_max)*sign(delta_x);
        delta_t = (ToA(ii)-ToA(ii-1)) - 2*abs(v_max)/a;
        t_star = abs(v_max)/a;
        t_hat = t_star + delta_t;
    %     t_ref(end+1:end+noPoints) = linspace(t_end,ToA(ii),noPoints);
        vel_ref_temp(1:noPoints,1) = v_max;
        up = find(t_ref(end-noPoints+1:end) - t_end < t_star);
        down = find(t_ref(end-noPoints+1:end) - t_end > t_hat);
        vel_ref_temp(up) = sign(delta_x)*a*(t_ref(noPoints*(ii-2)+up) - t_end);
        vel_ref_temp(down) = v_max - sign(delta_x)*a*(t_ref(end-noPoints+down) - (t_hat + t_end));
%         pos_refy(end+1:end+noPoints) = trapz(t_ref(1+noPoints*(ii-2):noPoints*(ii-1))...
%             - t_end,vel_refy);
        if isempty(pos_refx)
            pos_refx(1) = 0;
        else
            pos_refx(end+1) = pos_refx(end);
        end
        for jj = 2:noPoints
            pos_refx(end+1) = (pos_refx(end)) + ...
                (vel_ref_temp(jj) + vel_ref_temp(jj-1))/2*dt;
        end
    else
        vel_ref_temp = zeros(noPoints,1);
        pos_refx(end+1:end+noPoints) = wpt(ii-1,1)*ones(noPoints,1);
    end
    vel_refx = [ vel_oldx; vel_ref_temp ];
    vel_oldx = vel_refx;
    clear vel_ref_temp
    
    delta_y = wpt(ii,2) - wpt(ii-1,2);
    if delta_y ~= 0
        v_max = [ (a*(ToA(ii)-ToA(ii-1)) + sqrt((a*(ToA(ii)-ToA(ii-1)))^2 - 4*abs(delta_y)*a));...
            (a*(ToA(ii)-ToA(ii-1)) - sqrt((a*(ToA(ii)-ToA(ii-1)))^2 - 4*abs(delta_y)*a)) ]/2;
        v_max = min(v_max)*sign(delta_y);
        delta_t = (ToA(ii)-ToA(ii-1)) - 2*abs(v_max)/a;
        t_star = abs(v_max)/a;
        t_hat = t_star + delta_t;
    %     t_ref(end+1:end+noPoints) = linspace(t_end,ToA(ii),noPoints);
        vel_ref_temp(1:noPoints,1) = v_max;
        up = find(t_ref(end-noPoints+1:end) - t_end < t_star);
        down = find(t_ref(end-noPoints+1:end) - t_end > t_hat);
        vel_ref_temp(up) = sign(delta_y)*a*(t_ref(noPoints*(ii-2)+up) - t_end);
        vel_ref_temp(down) = v_max - sign(delta_y)*a*(t_ref(end-noPoints+down) - (t_hat + t_end));
%         pos_refy(end+1:end+noPoints) = trapz(t_ref(1+noPoints*(ii-2):noPoints*(ii-1))...
%             - t_end,vel_refy);
        if isempty(pos_refy)
            pos_refy(1) = 0;
        else
            pos_refy(end+1) = pos_refy(end);
        end
        for jj = 2:noPoints
            pos_refy(end+1) = (pos_refy(end)) + ...
                (vel_ref_temp(jj) + vel_ref_temp(jj-1))/2*dt;
        end
    %     t_end = t_ref(end+noPoints);
    else
        vel_ref_temp = zeros(noPoints,1);
        pos_refy(end+1:end+noPoints) = wpt(ii-1,2)*ones(noPoints,1);
    end
    vel_refy = [ vel_oldy; vel_ref_temp ];
    vel_oldy = vel_refy;
    clear vel_ref_temp
    
    delta_z = wpt(ii,3) - wpt(ii-1,3);
    if delta_z ~= 0
        v_max = [ (a*(ToA(ii)-ToA(ii-1)) + sqrt((a*(ToA(ii)-ToA(ii-1)))^2 - 4*abs(delta_z)*a));...
            (a*(ToA(ii)-ToA(ii-1)) - sqrt((a*(ToA(ii)-ToA(ii-1)))^2 - 4*abs(delta_z)*a)) ]/2;
        v_max = min(v_max)*sign(delta_z);
        delta_t = (ToA(ii)-ToA(ii-1)) - 2*abs(v_max)/a;
        t_star = abs(v_max)/a;
        t_hat = t_star + delta_t;
    %     t_ref(end+1:end+noPoints) = linspace(t_end,ToA(ii),noPoints);
        vel_ref_temp(1:noPoints,1) = v_max;
        up = find(t_ref(end-noPoints+1:end) - t_end < t_star);
        down = find(t_ref(end-noPoints+1:end) - t_end > t_hat);
        vel_ref_temp(up) = sign(delta_z)*a*(t_ref(noPoints*(ii-2)+up) - t_end);
        vel_ref_temp(down) = v_max - sign(delta_z)*a*(t_ref(end-noPoints+down) - (t_hat + t_end));
%         pos_refy(end+1:end+noPoints) = trapz(t_ref(1+noPoints*(ii-2):noPoints*(ii-1))...
%             - t_end,vel_refy);
        if isempty(pos_refz)
            pos_refz(1) = 0;
        else
            pos_refz(end+1) = pos_refz(end);
        end
        for jj = 2:noPoints
            pos_refz(end+1) = (pos_refz(end)) + ...
                (vel_ref_temp(jj) + vel_ref_temp(jj-1))/2*dt;
        end
    %     t_end = t_ref(end+noPoints);
    else
        vel_ref_temp = zeros(noPoints,1);
        pos_refz(end+1:end+noPoints) = wpt(ii-1,3)*ones(noPoints,1);
    end
    vel_refz = [ vel_oldz; vel_ref_temp ];
    vel_oldz = vel_refz;
    clear vel_ref_temp
    
    t_end = t_ref(end);
    
end
vel_ref = [ vel_refx, vel_refy, vel_refz ];
pos_ref = [ pos_refx' pos_refy' pos_refz' ];



end

