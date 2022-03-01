# RPCalc

A calculator designed to be used along with RPC, client and server.

## Installing

make -f Makefile.calc

## Running

./calc_server

./calc_client HOST MATHOP N1 N2

**Example:**

--
./calc_client 192.168.23.11 ADD 7.2 5.3

### Caveats

Ensure the service rpcbind.service is running.

The code won't run if you haven't installed the **rpcbind** package.

