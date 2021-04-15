function skewMatx = skewsymm(vectin)
%SKEWSYMM Creates a 3x3 skew-symmetric matrix using the input vector.

q1 = vectin(1);
q2 = vectin(2);
q3 = vectin(3);
skewMatx = [ 0, -q3, q2; q3, 0, -q1; -q2, q1, 0 ];

end

