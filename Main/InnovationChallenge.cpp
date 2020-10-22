#include<stdio.h>
#include <SQLAPI.h> // main SQLAPI++ header
int main(int argc, char* argv[])
{
	SAConnection con; // connection object to connect to database
	SACommandcmd; // create command object
	try
	{
		// connect to Oracle database 
		con.Connect("test", "tester", "tester", SA_Oracle_Client);

		// associate a command with connection
		// connection can also be specified in SACommand constructor
		cmd.setConnection(&con);

		// create table
		cmd.setCommandText("create table tbl(id number, interior, seatWidth, totseatWidth, pitch);");
		cmd.Execute();

		// insert value
		cmd.setCommandText("Insert into BOEING(id, interior, seatWidth, totseatWidth, pitch) values (787-8-0-1, 139.2, 20.5, 20.5, 78.0)");
		cmd.setCommandText("Insert into BOEING(id, interior, seatWidth, totseatWidth, pitch) values (787-8-0-2, 139.2, 20.5, 41.0, 78.0)");

		cmd.setCommandText("Insert into BOEING(id, interior, seatWidth, totseatWidth, pitch) values (787-8-1-2, 139.2, 19.0, 19.0, 38.0)");
        	cmd.setCommandText("Insert into BOEING(id, interior, seatWidth, totseatWidth, pitch) values (787-8-1-3, 139.2, 19.0, 38.0, 38.0)");

		cmd.setCommandText("Insert into BOEING(id, interior, seatWidth, totseatWidth, pitch) values (787-8-2, 139.2, 17.3, 51.9, 34.0)");
		cmd.setCommandText("Insert into BOEING(id, interior, seatWidth, totseatWidth, pitch) values (787-8-3, 139.2, 17.3, 51.9, 31.0)");

		cmd.Execute();


		// commit changes on success
		con.Commit();
		printf("Table created, row inserted!\n");
	}

	catch(SAException &x)
	{
		// SAConnection::Rollback()
		// can also throw an exception
		// (if a network error for example),
		// we will be ready
		try
		{
			// on error rollback changes
			con.Rollback();
		}
		catch(SAException &)
		{
		}
		// print error message

		printf("%s\n", (const char*)x.ErrText());
	}
	return 0;
	
// read table once user selects preset
SACommand select(&con, _TSA("SELECT NAME, AGE FROM EMPLOYEES WHERE AGE > :1"));

select << 30L;
select.Execute();

while(select.FetchNext()) {
    SAString sName = select[1].asString();
    long nAge = select[2].asLong();
    printf("Name: %s, age: %d \n", sName, nAge);
}	
	
}
