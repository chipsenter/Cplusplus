.PHONY: clean All

All:
	@echo "----------Building project:[ MilesToKm - Debug ]----------"
	@cd "MilesToKm" && "$(MAKE)" -f  "MilesToKm.mk"
clean:
	@echo "----------Cleaning project:[ MilesToKm - Debug ]----------"
	@cd "MilesToKm" && "$(MAKE)" -f  "MilesToKm.mk" clean
