class YarnClient : public Yarn
{
public:
	static	GameObjectPtr	StaticCreate()		{ return GameObjectPtr( new YarnClient() ); }

	virtual void		Read( InputMemoryBitStream& inInputStream ) override;
	virtual void		Update();

protected:
	YarnClient();

private:

	SpriteComponentPtr	mSpriteComponent;

	float mTimeToDie;
};