#if you turned on OPT_FI2 option in /buildconf.inc, rename this file to fi2.inc and insert correct keys values.
#the keys are not hosted in svn, read more about it in this thread: http://chdk.setepontos.com/index.php/topic,2995.0.html

ifeq ($(KEYSYS), d3)
FI2KEY=
FI2IV =
endif

ifeq ($(KEYSYS), d3enc)
FI2KEY=
FI2IV =
endif


ifeq ($(KEYSYS), d4)
FI2KEY=0b454d77d8c510f86374cf9bd56aede7
FI2IV =F7C1F7E5573FAB204F78B95948018398
endif

