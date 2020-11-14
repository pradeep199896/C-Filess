var num=[5,4,5,6,8,7]
var count=1;
var sum=0;
for(let i=0;i<num.length;++i)
{
    count=count*num[i]
    sum=sum+num[i]
}
console.log("Sum:",sum)
console.log("Multiplication:",count)