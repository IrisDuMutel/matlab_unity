function quatout = quatprod(q,p)
%QUATPROD Performs the Hamiltonian product between 2 quaternions.

[nq, mq] = size(q);
[np, mp] = size(p);
% if nq == 1 && mq == 4
%     q = q';
% end
% if (np == 1 && mp == 4)
%     pnew = p';
%     p = 0;
%     p = pnew;
% end

quatout = [ q(1), -q(2:4)'; q(2:4), q(1)*eye(3) + skewsymm(q(2:4)) ]*p;

end

