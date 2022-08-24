1.

import java.io.*;   
  
class UniqueElementsExample2 {   
    public static void main (String[] args)    
    {   
        int arrayWithDuplicates[] = { 10, 3, 5, 3, 9, 22, 4, 3, 1, 5, 6 };  
          
        int len = arrayWithDuplicates.length;   
          
        int[] distinctArray = new int[20];  
          
        int index = 0;  
          
        for (int i = 0; i < len; i++)   
        {   
            int flag = 0;  
            for (int j = 0; j < i; j++){  
                if (arrayWithDuplicates[i] == arrayWithDuplicates[j]){   
                    flag = 1;  
                    break;   
                }  
            }  
            if (flag == 0){   
                distinctArray[index] = arrayWithDuplicates[i];  
                index++;   
            }  
        }  
         for(int i = 0; i < index; i++)  
            System.out.print( distinctArray[i] + " ");   
    }         
      
}   



------------------------------------------------------------------------------------------------



2.

      <script>
         var date1, date2;
         date1 = new Date("07/5/2021");
         date2 = new Date("11/8/2022");
 var time_difference = date2.getTime() - date1.getTime();
 var days_difference = time_difference / (1000 * 60 * 60 * 24);
         
         document.write("Number of days between dates <br>" + 
                         date1 + " and <br>" + date2 + " are: <br>" 
                         + days_difference + " days");
      </script>  

----------------------------------------------------------------------------------------------------------

3.

<script>


function thirdLargest(arr, arr_size)
{
	
	if (arr_size < 3)
	{
		document.write(" Invalid Input ");
		return;
	}
	
	let first = arr[0];
	for (let i = 1;
			i < arr_size ; i++)
		if (arr[i] > first)
			first = arr[i];
	
	let second = Number.MIN_VALUE;
	for (let i = 0;
			i < arr_size ; i++)
		if (arr[i] > second &&
			arr[i] < first)
			second = arr[i];
	
	let third = Number.MIN_VALUE;
	for (let i = 0;
			i < arr_size ; i++)
		if (arr[i] > third &&
			arr[i] < second)
			third = arr[i];
	
	document.write("The third Largest " +
				"element is ", third);
}

	let arr = [12, 13, 1,
				10, 34, 16];
	let n = arr.length;
	thirdLargest(arr, n);
						
</script>

---------------------------------------------------------------------------------------------------------
4.

<script>
function modifyArray(array) {
  var prevEnd;
  array = array.sort((x,y) => x.start - y.start);

  for(i = 0; i < array.length; i++) {  
    if(!i) { 
      prevEnd = array[i].end;
      continue;
    }
    if(array[i].start < prevEnd && array[i].end > prevEnd) { 
      diff = prevEnd + 1 - array[i].start;
      array[i].start += diff;
      array[i].end += diff; 
      prevEnd = array[i].end;
    }
    else if(array[i].start > prevEnd) 
      continue;
    else 
      array.splice(i--, 1);
  }
  return array;
}

function test() {
  let array1 = [ { from: 3, to: 10 },
                { from: 5, to: 8 },
                { from: 11, to: 30 },
                { from: 0, to: 4 } ];
  let array2 = [{from: 10, to: 12}, {from:17, to: 19}]

  console.log(modifyArray(array1))
  console.log(modifyArray(array2))
}
</script>