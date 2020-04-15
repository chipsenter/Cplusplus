.PHONY: clean All

All:
	@echo "----------Building project:[ NestedIfStatement - Debug ]----------"
	@cd "NestedIfStatement" && "$(MAKE)" -f  "NestedIfStatement.mk"
clean:
	@echo "----------Cleaning project:[ NestedIfStatement - Debug ]----------"
	@cd "NestedIfStatement" && "$(MAKE)" -f  "NestedIfStatement.mk" clean
