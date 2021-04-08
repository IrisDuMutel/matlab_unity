%% Plots script
%% N-E plot
figure
plot(realPos.Data(:,2),realPos.Data(:,1));
grid on
hold on
plot(pos_ref(:,2),pos_ref(:,1),'r')
for ii = 1:size(wpt,1)
    plot(wpt(ii,2),wpt(ii,1),'o','MarkerFaceColor','y');
    % Naming the waypoints...
    if ii ~= 1 && ii ~= size(wpt,1)
        text(wpt(ii,2),wpt(ii,1), sprintf('wpt %d', ii))
    end
end
% for ii = 1:size(pos_ref,1) % Plotting only 1 value of tot...
%     if mod(ii,20) == 0
%         plot(pos_ref(ii,1),pos_ref(ii,2),'ro')
%     end
% end
legend('Actual trajectory','Reference')
xlabel('East');
ylabel('North');

%% 3D plot NED
figure
hold on
plot3(realPos.Data(:,2),realPos.Data(:,1),realPos.Data(:,3))
for ii = 1:size(wpt,1)
    plot3(wpt(ii,2),wpt(ii,1),wpt(ii,3),'ro','MarkerFaceColor','r');
end
grid on
legend('Actual trajectory','Waypoints')
xlabel('East');
ylabel('North');
zlabel('Down');
% title('North-East-Down plot');

%% 3D plot xyz
figure
hold on
plot3(realPos.Data(:,1),-realPos.Data(:,2),-realPos.Data(:,3))
for ii = 1:size(wpt,1)
    plot3(wpt(ii,1),-wpt(ii,2),-wpt(ii,3),'ro','MarkerFaceColor','r');
    if ii ~= size(wpt,1)
        text(wpt(ii,1),-wpt(ii,2),-wpt(ii,3), sprintf('wpt %d', ii))
    end
end
grid on
% for jj = 1:size(realPos.Data,1)
%     vectComp(jj,:) = [ sign(realPos.Data(jj,1)), sign(-realPos.Data(jj,2)), ...
%         sign(-realPos.Data(jj,3)) ];
% end
% quiver3(realPos.Data(:,1),-realPos.Data(:,2),-realPos.Data(:,3),...
%     vectComp(:,1),vectComp(:,2),vectComp(:,3));
legend('Actual trajectory','Waypoints')
xlabel('$x [m]$');
ylabel('$y [m]$');
zlabel('$z [m]$');
% title('xyz plot');
view([30,30]);

%% ref vs actual plot
figure
hold on
plot(realPos.time,realPos.data(:,1),'b')
plot(t_ref,pos_ref(:,1),'--r')
grid on
xlabel('Time [$s$]')
ylabel('North [$m$]')
legend('Actual position','Reference position')

figure
hold on
plot(realPos.time,realPos.data(:,2),'b')
plot(t_ref,pos_ref(:,2),'--r')
grid on
xlabel('Time [$s$]')
ylabel('East [$m$]')
legend('Actual position','Reference position')

figure
hold on
plot(realPos.time,realPos.data(:,3),'b')
plot(t_ref,pos_ref(:,3),'--r')
grid on
xlabel('Time [$s$]')
ylabel('Down [$m$]')
legend('Actual position','Reference position')

% Steady state error
start_t = find(t_ref - 3 == 0);
indx = find(t_ref(start_t(1)) - realPos.time <= 1e-2);
h_mean = mean(realPos.data(indx,3));
ss_err = pos_ref(end,3) - h_mean;

%% Command input plot
figure
plot(cmd.time,cmd.data(:,3))
grid on
xlabel('Time [$s$]');
ylabel('Thrust [$N$]');

figure
hold on
plot(cmd.time,cmd.data(:,4),'b');
plot(cmd.time,cmd.data(:,5),'r');
plot(cmd.time,cmd.data(:,6),'g');
grid on
xlabel('Time [$s$]')
ylabel('Moment [$Nm$]')
legend('$\tau_{x}$','$\tau_{y}$','$\tau_{z}$')

%% Euler angles behavior
figure
plot(eulAng.time,eulAng.data(:,1))
hold on
grid on
plot(eulAng.time,eulAng.data(:,2))
plot(eulAng.time,eulAng.data(:,3))
xlabel('Time [$s$]')
ylabel('Angle [$rad$]')
legend('$\phi$','$\theta$','$\psi$')

%% vel ref vs actual vel
figure
hold on
plot(realVel.time,realVel.data(:,1),'b')
plot(t_ref,vel_ref(:,1),'--r')
grid on
xlabel('Time [$s$]')
ylabel('Velocity (North) [$m/s$]')
legend('Actual NED velocity','Reference NED velocity')

figure
hold on
plot(realVel.time,realVel.data(:,2),'b')
plot(t_ref,vel_ref(:,2),'--r')
grid on
xlabel('Time [$s$]')
ylabel('Velocity (East) [$m/s$]')
legend('Actual NED velocity','Reference NED velocity')

figure
hold on
plot(realVel.time,realVel.data(:,3),'b')
plot(t_ref,vel_ref(:,3),'--r')
grid on
xlabel('Time [$s$]')
ylabel('Velocity (Down) [$m/s$]')
legend('Actual NED velocity','Reference NED velocity')
%% vel NE vs actual NE vel (one plot)
figure
hold on
plot(realVel.time,realVel.data(:,1),'b')
plot(t_ref,vel_ref(:,1),'--r')
grid on

plot(realVel.time,realVel.data(:,2),'color','#EDB120')
plot(t_ref,vel_ref(:,2),'--g')
xlabel('Time [$s$]')
ylabel('Velocity [$m/s$]')
legend('Actual North velocity','Reference North velocity',...
    'Actual East velocity','Reference East velocity')



