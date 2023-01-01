<h2><a href="https://leetcode.com/problems/set-matrix-zeroes/">73. Set Matrix Zeroes</a></h2><h3>Medium</h3><hr><div><p>Given an <code>m*n</code> integer matrix <code>matrix</code> , if an element is <strong>zero</strong> , set its entire rows and colums to <code>0</code>'s .
  You must do it <strong>in place</strong> .</p>

<ul>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://user-images.githubusercontent.com/112556451/210169198-57935c3d-30c0-4f98-b46c-2a0e53ced818.jpg" style="width: 641px; height: 241px;">
<pre><strong>Input:</strong> matrix = [[1,1,1],[1,0,1],[1,1,1]]
<strong>Output:</strong> [[1,0,1],[0,0,0],[1,0,1]]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://user-images.githubusercontent.com/112556451/210169288-86222c16-6b83-4cfc-be13-d49e2eace406.jpeg" style="width: 791px; height: 241px;">
<pre><strong>Input:</strong> matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
<strong>Output:</strong> [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == matrix.length</code></li>
	<li><code>n == matrix[0].length</code></li>
	<li><code>1 &lt;= m,n &lt;= 200</code></li>
  <li><code>-2<sup>31</sup> &lt;= matrix[i][j] &lt; 2<sup>31</sup>-1 </code></li>
  
  <strong>FOLLOW UP :</strong>  
  A straightforward solution using <code>O(mn)</code> space is probably a bad idea.
  A simple improvement uses <code>O(m + n)</code> space, but still not the best solution.
  Could you devise a constant space solution ?
</ul>
</div>
