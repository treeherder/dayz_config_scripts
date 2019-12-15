string character_model = "";
Head_Default model_head = Head_Default.Cast(Maleplayer.GetInventory().FindPlaceholderForSlot(InventorySlots.GetSlotIdFromString("Head")));

// a couple quick examples:
if (model_head.IsKindOf("FemaleEvaHead")) character_model = "SurvivorFemaleEva";
if (model_head.IsKindOf("FemaleFridaHead")) character_model = "SurvivorFemaleFrida";
if (model_head.IsKindOf("MalePeterHead")) character_model     = "SurvivorMalePeter";


class player_character {
	handle = "Survivor%1_%2";
	sex[] = {"Female", "Male"};
	dudes[] = {"Mirek", "Boris", "Cyril", "Denis", "Elias", "Francis", "Guo", "Hassan", "Indar", "Jose", "Kaito", "Lewis", "Manua", "Niki", "Oliver", "Peter", "Quinn", "Rolf", "Seth", "Taiki"};
	chicks[] = {"Eva", "Frida", "Gabi", "Helga", "Irena", "Judy", "Keiko", "Linda", "Maria", "Naomi"};
}:

if (model_head.IsKindOf("MaleHassanHead")) character_model = 
"MaleAdamHead"
"MaleBorisHead"
"MaleCyrilHead"
"MaleDenisHead"
"MaleEliasHead"
"MaleFrancisHead"
"MaleGuoHead"
"MaleIndarHead"
"MaleJoseHead"
"MaleKaitoHead"
"MaleLewisHead"
"MaleManuaHead"
"MaleNikiHead"
"MaleOliverHead"
"MalePeterHead"
"MaleQuinnHead"
"MaleRolfHead"
"MaleSethHead"
"MaleTaikiHead"

"FemaleEvaHead"
"FemaleFridaHead"
"FemaleGabiHead"
"FemaleHelgaHead"
"FemaleIrenaHead"
"FemaleJudyHead"
"FemaleKeikoHead"
"FemaleLindaHead"
"FemaleMariaHead"
"FemaleNaomiHead"
