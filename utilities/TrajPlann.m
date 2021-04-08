%% Trajectory planner

clear pos_ref attitude_ref vel_ref att_eul_ref
freq = 1;
waypoints = [ 0,0,0; ... % Initial position
              0,0.1,0;...
              
              0,0.9,0;...
              0,1,0; ...
              0.1,1,0;...
              
              0.9,1,0;...
              1,1,0; ...
              1,9.9,0;...
              
              1,0.1,0;...
              1,0,0; ...
              0.9,0,0;...
              
              0.1,0,0;...
              0,0,0 ];    % Final position
          
          % !! WITH THESE VALUES THE ALGORITHMS GIVES BACK NONSENSE VALUES!
          % MAYBE I SHOULD CHANGE WAYPOINTS CHOOSING GREATER DISTANCES LIKE
          % 10m
% waypoints = [ 0,0,0; 1,0,0; 0,0,0 ];

shape = 'arc'; % or 'arc'
n = size(waypoints,1);
          
ToA = [ 0, 0.1, 9.9, 10, 10.1, 19.9, 20, 20.1, 29.9, 30, 30.1, 39.9, 40 ]; % in sec
% ToA = [0,10,20];

% heading = quaternion([0,0,0; ...
%                       45,0,0; ...
%                       135,0,0; ...
%                       225,0,0; ...
%                       0,0,0], ...
%                       'eulerd','ZYX','frame');

% NOTE that I'm not using a psidot reference, so it seems to be unstable
% when a rotation is z is asked!!
heading = quaternion(zeros(13,3),'eulerd','ZYX','frame');

switch(shape) 
    case 'square'

    for ii = 1:n-1                  
%         traj{ii} = waypointTrajectory(waypoints(ii:ii+1,:), ...
%             'TimeOfArrival', ToA(ii:ii+1),...
%             'Orientation', heading(ii:ii+1,:),'SampleRate',freq);
            traj{ii} = waypointTrajectory(waypoints(ii:ii+1,:), ...
            'TimeOfArrival', [0,1],...
            'Orientation', heading(ii:ii+1,:),'SampleRate',freq);

    end
    
    
    
    
    case 'arc'
    traj = waypointTrajectory(waypoints, ...
        'TimeOfArrival',ToA, ...
        'Orientation',heading, ...
        'SampleRate',freq);
    count = 1;
    while ~isDone(traj)
        [pos_ref(count,:), attitude_ref, vel_ref(count,:)] = traj();

        att_eul_ref(count,:) = euler(attitude_ref,'ZYX','frame');

%         pause(trajectory.SamplesPerFrame/trajectory.SampleRate)
        count = count + 1;
    end
    vel_ref(end,:) = 0; % to stop the drone
end










