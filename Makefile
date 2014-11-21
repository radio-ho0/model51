CC = sdcc
FLAGS = -mmcs51 --model-small --std-c99
FILENAME = main
SRC = src
OUTPUT = output

MAKEHEX = packihx

all: bin

bin: hex
	hex2bin $(OUTPUT)/$(FILENAME).hex

hex:
	$(CC) $(FLAGS) $(SRC)/$(FILENAME).c -o $(OUTPUT)/$(FILENAME).ihx
	$(MAKEHEX) $(OUTPUT)/$(FILENAME).ihx >./$(OUTPUT)/$(FILENAME).hex

	
.PHONY: clean

clean:
	-rm  $(OUTPUT)/*.hex 
	

fire:
	stcflash $(OUTPUT)/$(FILENAME).bin  ###
	# I hate sudo
	#sudo stcflash timer.bin  ###
