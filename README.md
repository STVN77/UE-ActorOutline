# UE-ActorOutline
 A component system for displaying outlines on actors with multiple color options. Lightweight, optimized and professional quality. Fully replicated, supports local and multiplayer usage.

## SETUP
1.	Open project settings. Navigate to the Rendering->Postprocessing section. Set `Custom Depth-Stencil Pass` to: `Enabled with Stencil`.
   ![SetupImage1](/Images/Screenshot%202023-09-13%20160337.png)
2.	Add a Post Processing Volume to your level.
   ![SetupImage2](/Images/Screenshot%202023-09-13%20155422.png)
3.	Select the newly created post processing volume in your world outliner, open the details panel and look for the `Post Process Materials`. Add `MI_OutlineColored` to the array.
4.	In the same details panel, look for the `Post Process Volume Settings` and enable `Infinite Extent`.
   ![SetupImage4](/Images/Screenshot%202023-09-13%20154359.png)

## USAGE
1.	Add the Outline component in your actor components pane.
   ![UsageImage1](/Images/Screenshot%202023-09-13%20160434.png)
2.	Select the newly added outline component and edit the default values in the class defaults.
   ![UsageImage2](/Images/Screenshot%202023-09-13%20152626.png)
3.	The outline component comes with many useful functions as seen in the image. They are self-explanatory.
   ![UsageImage3](/Images/Screenshot%202023-09-13%20152502.png)
4.	Further, if you want to edit the outline thickness, fill amount or colors. Open the `MI_OutlineColored` material asset from the content browser and go to the details panel to find the overridable parameters.
   ![UsageImage4](/Images/Screenshot%202023-09-13%20152725.png)

## UNREAL MARKETPLACE
![MarketplaceImg](/Images/Screenshot%202023-09-13%20161834.png)
- Useful for loot, interaction, world markers, player outlines and much more.
- Easy to use. Setup in minutes.
- Lightweight, optimized performance, professionally built.
- Network optimized data. Supports local and multiplayer.
  - Enable the replicates default option for multiplayer usage.
  - Do not enable the replicates default option for local/client usage.
- Up to 5 customizable colors.
- Customizable outline thickness and fill amount.
- Uses the standard post processing technique for outlining.
- Compatible, customizable, and extendable with blueprints.
  - Edit the c++ directly or create a child class of the component in blueprints.