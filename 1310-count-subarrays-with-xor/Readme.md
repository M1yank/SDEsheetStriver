<h2><a href="https://www.codingninjas.com/codestudio/problems/1115652">53. Count Subarrays with Given XOR</a></h2><h3>Medium</h3><hr><div>
  
<h4 id="given-an-array-of-integers-arr-and-an-integer-x-you-are-supposed-to-find-the-number-of-subarrays-of-39-arr-39-which-have-bitwise-xor-of-the-elements-equal-to-39-x-39">Given an array of integers ‘ARR’ and an integer ‘X’, you are supposed to find the number of subarrays of 'ARR' which have bitwise XOR of the elements equal to 'X'.</h4>

<h5 id="note">Note:</h5>

<pre><code>An array ‘B’ is a subarray of an array ‘A’ if ‘B’ that can be obtained by deletion of, several elements(possibly none) from the start of ‘A’ and several elements(possibly none) from the end of ‘A’. 
</code></pre>

<h5 id="input-format">Input Format :</h5>

<pre><code>The first line contains a single integer ‘T’ denoting the number of test cases. The test cases follow.

The first line of each test case contains two integers ‘N’ and ‘X’ separated by a single space, denoting the number of elements in the array and the required subarray XOR respectively.

The second line of each test case contains ‘N’ single space-separated integers denoting the elements of the array.
</code></pre>

<h5 id="output-format">Output Format :</h5>

<pre><code>For each test case, print on a new line the number of subarrays of the given array that have bitwise XOR of the elements equal to ‘X’.

Print the output of each test case in a separate line.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You don’t need to print anything; It has already been taken care of.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= T &lt;= 10
3 &lt;= N &lt;= 5 * 10 ^ 4
0 &lt;= X &lt;= 10 ^ 9
0 &lt;= ARR[i] &lt;= 10 ^ 9

Where ‘T’ denotes the number of test cases, ‘N’ denotes the number of elements in the array, ‘X’ denotes the required subarray XOR and ARR[i] denotes the 'i-th' element of the given array.

Time Limit: 1 sec
</code></pre>
</div><div _ngcontent-serverapp-c196="" class="description ng-star-inserted"><h5>Sample Input 1 :</h5>

<pre><code>2
5 8
5 3 8 3 10
3 7
5 2 9
</code></pre>

<h5>Sample Output 1 :</h5>

<pre><code>2
1
</code></pre>

<h5>Explanation of Sample Input 1 :</h5>

<pre><code>In the first test case, the subarray from index 1 to index 3 i.e. {3,8,3} and the subarray from index 2 to index 2 i.e. {8} have bitwise XOR equal to 8.

In the second test case, the subarray from index 0 to index 1 i.e. {5,2} has bitwise XOR equal to 7.
</code></pre>

<h5>Sample Input 2 :</h5>

<pre><code>2
6 11
10 1 0 3 4 7
5 4
4 3 1 2 4
</code></pre>

<h5>Sample Output 2 :</h5>

<pre><code>3
4
</code></pre>
</div><!----><!----><!----></div></codingninjas-problem-description><!----></div>
