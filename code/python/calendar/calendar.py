import datetime

def how_many_days_since(date):
    """Returns the number of days since the given date."""
    return (datetime.date.today() - date).days  # <1> <2> 

days_since = how_many_days_since(datetime.date(1969,10,1))
print(f'days_since 1/10/1969: {days_since}')

