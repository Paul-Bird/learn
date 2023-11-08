
### Initial Setup Steps
``` 
> cd t1  
> sqlite3 t1.db  
sqlite> CREATE TABLE users(first_name text, last_name text);
sqlite> INSERT INTO users VALUES("John","Schmitt");
```
CTRL-D to exit 

### Process SQL file 
#### From Shell

```
> sqlite3 t1.db < t1.sql
```

#### From CLI
```
> sqlite3 t1.db
sqlite> .read t1.sql
```