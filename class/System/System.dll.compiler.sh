#!/bin/bash
valac  -d "/home/consola/Documentos/farmaenlace/Operadores/Edwin/Desarrollo/ProyectosSoftware/proyects/libspire_pg/bin/lnx"  "/home/consola/Documentos/farmaenlace/Operadores/Edwin/Desarrollo/ProyectosSoftware/proyects/libspire_pg/libspire_pg.vala"  --pkg gee-1.0  --pkg libpq -X -lpq  --library libspire_pg  --vapi "/home/consola/Documentos/farmaenlace/Operadores/Edwin/Desarrollo/ProyectosSoftware/proyects/libspire_pg/bin/lnx/libspire_pg.vapi"  -H "/home/consola/Documentos/farmaenlace/Operadores/Edwin/Desarrollo/ProyectosSoftware/proyects/libspire_pg/bin/lnx/libspire_pg.h"  -o libspire_pg.so  -X -fPIC -X --share  -D _LNX_SPIRE_   
read