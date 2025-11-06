class media {
    constructor(tittle,artist,duration,filepath) {
        this.#tittle = tittle;
        this.#artist = artist;
        this.#duration = duration;
        this.#filepath = filepath;
        this.#playcount = 0;
        this.#lastplayed = null;
        this.#isplaying = false;
        this.currentpos = 0;
    }
    #tittle;
    #artist;
    #duration;
    #filepath;
    #playcount;
    #isplaying;
    currentpos;
    #lastplayed;

    gettittle(){
        return this.#tittle;
    }
    getartist(){
        return this.#artist;
    }
    getduration(){
        return this.#duration;
    }
    getfilepath(){
        return this.#filepath;
    }
    getplaycount(){
        return this.#playcount;
    }
    getlastplayed(){
        return this.#lastplayed;
    }
    getcurrentpos(){
        return this.currentpos;
    }
    getisPlaying(){
        return this.#isplaying;
    }
    setcurrentplaying(bool){
        this.#isplaying = bool;
    }

    updatestates(){
        this.#playcount++;
        this.#lastplayed = new Date();
    }

    play(){
        throw new Error("implement play()");
    }

    pause(){
        throw new Error("implement pause()");
    }

    stop(){
        throw new Error("stops be implement sucessfully");
    }

    getmediainfo(){
        throw new Error("getmediainfo() must be implemented");
    }

    getformatedduration(){
        const minutes = Math.floor(this.#duration / 60);
        const seconds = this.#duration % 60;
        return `${minutes}:${seconds.toString().padStart(2,"0")}`;
    }

    getprogress(){
        if (this.#duration === 0) {
            return 0;
        }
        return (this.currentpos / this.#duration) * 100;
    }
}


// let time = 9037;
// let hour = Math.floor(time/3600);

// // let min = Math.floor(time/(60) - 60*hour);
// let min = Math.floor((time%3600)/60);
// // let sec = Math.floor(time - min*60 - hour*3600);
// let sec = Math.floor((time%60))
// console.log(hour,":",min,":", sec);


class audio extends media {
    #formate;
    #bitrate;
    #volume;
    #isplay;
    constructor(tittle,artist,duration,filepath,formate,bitrate,volume,isplay) {
    super(tittle,artist,duration,filepath);
        this.#formate = formate;
        this.#bitrate = bitrate;
        this.#volume = 50;
        this.#isplay = false; 
    }

    play(){
        this.#isplay = true;
        this.setcurrentplaying(this.#isplay);
        this.updatestates();
        return {
            success : true,
            message : `playing audio ${this.gettittle()} by ${this.getartist()}`
        }
    }

    pause(){
        this.setcurrentplaying(false);
        return {
            success : true,
            message : `paused audio ${this.gettittle()} by ${this.getartist()}`
        }
    }

    stop(){
        this.setcurrentplaying(false);
        this.currentpos = 0;
        return {
            success : true,
            message : `stopped audio ${this.gettittle()} by ${this.getartist()}`
        }
    }

    getmediainfo(){
        return{
            tittle : this.gettittle(),
            artist : this.getartist(),
            duration : this.getduration(),
            type : 'audio',
            duration : this.getformatedduration()
        }
    }

    setvolume(volume){
        this.#volume = Math.max(0,Math.min(100,volume));
        return `volume set to ${this.#volume}%`;
    }
    getvol(){
        return `volume is ${this.#volume}%`;
    }
}



const music = new audio("xqp","qwe",30,"music.mp3","mp3",100,100,false);
console.log(music.play());