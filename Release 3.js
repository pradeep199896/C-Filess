function find(remove)
{ 
    var diff=[]
    for(var i=0;i<remove.length;++i)
    {
        if(diff.indexOf(remove[i])==-1)
        {
            diff.push(remove[i])
        }
    }
    return diff
}
console.log(find([5,8,7,3,1,5,9,7,10]))