void Level::render(int x, int y, SDL_Rect* clip=NULL){
	SDL_Rect renderQuad = {x, y, mWidth, mHeight};

	if (clip!=NULL){
		renderQuad.w = clip->w;
		renderQuad.h = clip->h;
	}
	SDL_RenderCopy(gameRenderer, mTexture, clip, &renderQuad)
}
	SDL_SetRenderDrawColow(gameRenderer, 0xFF);
	SDL_RenderClear(gRenderer);
	render(x, y, width, height);	
