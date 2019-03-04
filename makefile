
include config.mk
all:
	@for dir in $(MAKE_PATH); \
	do \
		make -C $$dir; \
	done

clean:
	-rm -f exec
	-rm -f $(BUILD_ROOT)/dlink_obj/*.d $(BUILD_ROOT)/oobj/*.o
