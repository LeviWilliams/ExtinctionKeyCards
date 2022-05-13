modded class Land_KlimaX_T1Door 
{
    override string GetCrateClassName()
    {
        return "RedemptionMilitaryCrate";
    }

    override void AddLoot( EntityAI crate )
    {
 
        int i;

        int rndIndex;
		EntityAI obj;
		EntityAI attachment;

        int minWeapons = 1;
        int maxWeapons = 2;
        int minMagAttachments = 2;
        int maxMagAttachments = 4;
        int minFood = 1;
        int maxFood = 4;
        int minBackpacks = 0;
        int maxBackpacks = 2;
        int minVests = 0;
        int maxVests = 2;
        int minShirts = 0;
        int maxShirts = 2;
        int minPants = 0;
        int maxPants = 2;
        int minOther = 2;
        int maxOther = 6;

        //! Weapons
        int weaponsListCount = KEYCARD_WEAPONS_T1.Count();

        for (i=0; i<Math.RandomInt(minWeapons,maxWeapons); i++) 
        {
            string weaponName = KEYCARD_WEAPONS_T1.Get( Math.RandomInt( 0, weaponsListCount ) );
            crate.GetInventory().CreateInInventory( weaponName );
        }

        //! Mags Attachments
        int magAttachmentsListCount = KEYCARD_ATTACHMENTS_MAGS_T1.Count();

        for (i=0; i<Math.RandomInt(minMagAttachments,maxMagAttachments); i++) 
        {
            string magAttachmentName = KEYCARD_ATTACHMENTS_MAGS_T1.Get( Math.RandomInt( 0, magAttachmentsListCount ) );
            crate.GetInventory().CreateInInventory( magAttachmentName );
        }

        //! Food
        int foodItemsListCount = KEYCARD_FOOD_DRINKS.Count();

        for (i=0; i<Math.RandomInt(minFood,maxFood); i++) 
        {
            string foodName = KEYCARD_FOOD_DRINKS.Get( Math.RandomInt( 0, foodItemsListCount ) );
            crate.GetInventory().CreateInInventory( foodName );
        }

        //! Backpacks
        int backpacksListCount = KEYCARD_BACKPACKS.Count();

        for (i=0; i<Math.RandomInt(minBackpacks,maxBackpacks); i++) 
        {
            string backPackName = KEYCARD_BACKPACKS.Get( Math.RandomInt( 0, backpacksListCount ) );
            crate.GetInventory().CreateInInventory( backPackName );
        }

        //! Vests
        int vestsListCount = KEYCARD_VESTS.Count();

        for (i=0; i<Math.RandomInt(minVests,maxVests); i++) 
        {
            string vestName = KEYCARD_VESTS.Get( Math.RandomInt( 0, vestsListCount ) );
            crate.GetInventory().CreateInInventory( vestName );
        }

        //! Shirts
        int shirtsListCount = KEYCARD_SHIRTS.Count();

        for (i=0; i<Math.RandomInt(minShirts,maxShirts); i++) 
        {
            string shirtName = KEYCARD_SHIRTS.Get( Math.RandomInt( 0, shirtsListCount ) );
            crate.GetInventory().CreateInInventory( shirtName );
        }

        //! Pants
        int pantsListCount = KEYCARD_PANTS.Count();

        for (i=0; i<Math.RandomInt(minPants,maxPants); i++) 
        {
            string pantName = KEYCARD_PANTS.Get( Math.RandomInt( 0, pantsListCount ) );
            crate.GetInventory().CreateInInventory( pantName );
        }

        // !Other unique
        int otherItemsT1List = KEYCARD_OTHER_T1.Count();

        for (i=0; i<Math.RandomInt(minOther,maxOther); i++) 
        {
            string otherNameT1 = KEYCARD_OTHER_T1.Get( Math.RandomInt( 0, otherItemsT1List ) );
            crate.GetInventory().CreateInInventory( otherNameT1 );
        }
    }
};
