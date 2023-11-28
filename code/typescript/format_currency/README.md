tsc main.ts
node main.js

#### type vs interface

Can’t use an interface to alias a primitive type. Interface only on an object.  

Can't use an interface for union.  

```type Transport = 'Bus' | 'Boat' | 'Bike' | 'Walk';```

But can union two interfaces using a ```type```.  

Type aliases can’t be merged.  

Do you need ```type``` and ```intefaces``` ?  

Interface has ```extends```  

Currenty have no reason to use ```interface```


