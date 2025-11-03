CC=${CROSS_COMPILE}gcc

.PHONY: clean

writer: writer.c
	echo "$(CC)"
	$(CC) writer.c -o writer

clean:
	rm -rf writer *.o
