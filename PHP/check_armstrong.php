<!-- check if the given number is armstrong or not. -->

<!-- An Armstrong number, is a number that is equal to the sum of the cubes of its own digits.
 for example: 370
              = 3*3*3 + 7*7*7 + 0*0*0
              = 27 + 343 + 0
              = 370 
-->

<!-- 
Input : 371
Output: is an Armstrong Number 
-->

<?php  
 
$n=371;  
$sum=0;  
$i=$n;
 
while($i!=0)  
{  
$x=$i%10;  
$sum=$sum+$x*$x*$x;  
$i=$i/10;  
}
 
if($n==$sum)  
{  
echo "$n is an Armstrong Number.";  
}  
 
else  
{  
echo "$n is not an Armstrong Number.";  
}  
?> 