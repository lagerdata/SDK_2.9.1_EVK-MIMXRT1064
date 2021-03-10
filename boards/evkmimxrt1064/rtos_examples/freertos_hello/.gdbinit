set remotetimeout 5
target remote localhost:3333

mon reset halt

file armgcc/flexspi_nor_debug/freertos_hello.elf

load

mon reset halt

b main

c