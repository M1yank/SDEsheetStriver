<h2><a href="https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1">493. Given an array of integers. </a></h2><h3>Medium</h3><hr><div><p>Find the Inversion Count in the array.</p>

<p><strong>Inversion Count:</strong> For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is <code>0</code>. If an array is sorted in the reverse order then the inversion count is the maximum. </p>
<p>Formally, two elements <code>a[i]</code> and <code>a[j]</code> form an inversion if <code>a[i] > a[j]</code> and <code>i < j</code>.</p>
  <p>You don't need to read input or print anything. Your task is to complete the function <strong>inversionCount()</strong> which takes the array arr[] and the size of the array as inputs and returns the inversion count of the given array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> N = 5, arr[] = {2, 4, 1, 3, 5}
<strong>Output:</strong> 3
<strong>Explanation:</strong> The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> N = 5 arr[] = {2, 3, 4, 5, 6}
<strong>Output:</strong> 0
<strong>Explanation:</strong> As the sequence is already sorted so there is no inversion count.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> N = 3, arr[] = {10, 10, 10}
<strong>Output:</strong> 0
<strong>Explanation:</strong> As all the elements of array are same, so there is no inversion count.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
  <li><code>1 ≤ N ≤ 5*10<sup>5</sup></code></li>
  <li><code>1 ≤ arr[i] ≤ 10<sup>18</sup></code></li>
</ul>

</div>
