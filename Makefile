CC=${CROSS_COMPILE}gcc

.PHONY: clean

writer: finder-app/writer.c
	echo "$(CC)"
	$(CC) finder-app/writer.c -o writer

clean:
	rm -rf writer *.o
