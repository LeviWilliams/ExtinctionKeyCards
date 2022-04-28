
modded class Land_KlimaX_T4Door 
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
        int maxMagAttachments = 3;
        int minVests = 1;
        int maxVests = 3;
        int minOther = 2;
        int maxOther = 3;

        //! Weapons
        int weaponsListCount = KEYCARD_WEAPONS_T4.Count();

        for (i=0; i<Math.RandomInt(minWeapons,maxWeapons); i++) 
        {
            string weaponName = KEYCARD_WEAPONS_T4.Get( Math.RandomInt( 0, weaponsListCount ) );
            crate.GetInventory().CreateInInventory( weaponName );
        }

        //! Mags Attachments
        int magAttachmentsListCount = KEYCARD_ATTACHMENTS_MAGS_T4.Count();

        for (i=0; i<Math.RandomInt(minMagAttachments,maxMagAttachments); i++) 
        {
            string magAttachmentName = KEYCARD_ATTACHMENTS_MAGS_T4.Get( Math.RandomInt( 0, magAttachmentsListCount ) );
            crate.GetInventory().CreateInInventory( magAttachmentName );
        }

        //! Vests
        int vestListCount = KEYCARD_VESTS_T4.Count();

        for (i=0; i<Math.RandomInt(minVests,maxVests); i++) 
        {
            string vestName = KEYCARD_VESTS_T4.Get( Math.RandomInt( 0, vestListCount ) );
            crate.GetInventory().CreateInInventory( vestName );
        }

        //! Vests
        int otherListCount = KEYCARD_OTHER_T4.Count();

        for (i=0; i<Math.RandomInt(minOther,maxOther); i++) 
        {
            string otherName = KEYCARD_OTHER_T4.Get( Math.RandomInt( 0, otherListCount ) );
            crate.GetInventory().CreateInInventory( otherName );
        }
    }
};