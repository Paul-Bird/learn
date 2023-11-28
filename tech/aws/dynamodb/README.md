[Home Page](https://aws.amazon.com/pm/dynamodb)

Managed Key Value lookup store, optimised for performance.  

Up to 5 nines availability.  

Trade-off, need to know data access patterns upfront. What the key is and structure of the matching value.  

Authorised through IAM.  

Capacity mode: On demand model or Provisioned  

[Service Quotas](https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ServiceQuotas.html)  

Tables - collection of items  
Items - collection of attributes  
Attributes - json objects max 400 KB.  
Partition Key - max 2048 bytes  
Sort Key - max 1024 bytes  
Primary key - Partition Key & Sort Key  

The combination of the Partition Key & Sort Key must be unique for the Primary Key.  

Scan Operation with filter inefficient, charged by read. GSI Global Secondary index to mitigate.  

Tables are region specific.  

Partition Key cannot be changed later.  

> Capacity mode Provisioned:  
> Read capacity - autoscaling on/off  
> Write capacity - autoscaling on/off  
> off: Provisioned capacity units  
> default: 5  
> on: Minimum / Maximum capacity units + Target utilization (%)  
> default: 1 , 10,  70%  

Secondary Indexes:
- Local Index
- Global Index can have own read and write capacity configured.

Encryption at rest  




### Tutorials

[AWS DynamoDB Tutorial For Beginners](https://youtu.be/2k2GINpO308?list=PL9nWRykSBSFi5QD8ssI0W5odL9S0309E2)

